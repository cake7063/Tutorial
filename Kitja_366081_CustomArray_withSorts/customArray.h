#pragma once
#include <memory>
#include <iostream>
#include <assert.h>

template<typename T>
class CustomArray
{
public:
	CustomArray(int initSize = 10) : mMaxSize(initSize), mSize(0)
	{
		mArray = new T[mMaxSize];
		for (int i = 0; i < mMaxSize; ++i)
			mArray[i] = T();
	}

	void reset() { mSize = 0; }
	~CustomArray()
	{
		if(mArray != nullptr)
			delete[] mArray;
	}

	void push(T val)
	{
		if (mSize >= mMaxSize)
			grow();

		mArray[mSize] = val;
		++mSize;
	}

	void pop()
	{
		// what if mSize == 0;
		if (mSize == 0)
			return;

		mArray[--mSize] = T();
		// what if mSize < mMaxSize / 2;
		if (mSize*2 < mMaxSize )
			shrink();
	}

	T& operator[](int i)
	{
		if (i < 0 || i >= mSize)
		{
			std::cout << "!!ERROR! trying to access out of range element!!\n";
			assert(false);
		}
		return mArray[i];
	}
	int Size() { return mSize; }


	void swap(int i, int j)
	{
		T temp = mArray[i];
		mArray[i] = mArray[j];
		mArray[j] = temp;
	}

	/// Bubble sort the array.
	/// returns number of swaps
	/// accumulates number of comparisons in the argument.
	int BubbleSort(int &numOfComparisons)
	{
		int numSwaps{ 0 };
		for (int k = mSize - 1; k > 0; --k)
		{
			for (int i = 0; i < k; ++i)
			{
				++numOfComparisons;
				if (mArray[i] > mArray[i + 1])
				{
					swap(i, i + 1);
					++numSwaps;
				}
			}
		}
		return numSwaps;
	}

	/// Selection sorst the array
	/// returns number of swaps
	/// accumulates number of comparisons in the argument.
	int SelectionSort(int &numOfComparisons)
	{
		int numOfSwaps = 0;
		for (int k = 0; k < mSize - 1; ++k)
		{
			int min = k;

			for (int i = k + 1; i < mSize - 1; ++i)
			{
				++numOfComparisons;
				if (mArray[i] < mArray[min])
					min = i;
			}
			++numOfComparisons;
			if (k != min) //(mArray[k] > mArray[min])
			{
				++numOfSwaps;
				swap(k, min);
			}
		}
		return numOfSwaps;
	}

	/// Insertion sorst the array
	/// returns number of shifts
	/// accumulates number of comparisons in the argument.
	int InsertionSort(int &numOfComparisons)
	{
		int numOfShifts = 0;
		for (int k = 1; k < mSize; ++k)
		{
			T temp = mArray[k];
			int i = k;
			while (i > 0 && mArray[i - 1] >= temp)
			{
				++numOfComparisons;
				mArray[i] = mArray[i - 1];
				++numOfShifts;
				--i;
			}
			++numOfComparisons; //accounts for last comparison in while.
			mArray[i] = temp;
			++numOfShifts;
		}
		return numOfShifts;
	}

private:
	void grow()
	{
		std::cout << "Growing array!!\n";
		mMaxSize *= 2;
		T *tmp = new T[mMaxSize];
		for (int i = 0; i < mSize; ++i)
			tmp[i] = mArray[i];

		delete[] mArray;
		mArray = tmp;
	}
	void shrink()
	{
		if (mSize * 2 >= mMaxSize)
			return;
		
		std::cout << "Shrinking array\n";
		mMaxSize /= 2;
		T *tmp = new T[mMaxSize];
		for (int i = 0; i < mSize; ++i)
			tmp[i] = mArray[i];

		delete[] mArray;
		mArray = tmp;
	}

	T *mArray;
	int mMaxSize;
	int mSize;

};
