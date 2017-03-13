
#include "customArray.h"
//#include <random>
#include <time.h>
using namespace std;
int main()
{

	//const clock_t begin_time = clock();
	
	int arraySizeSmall = 4000;
	int arraySizeMedium = 12000;
	int arraySizeLarge = 20000;
	///testing bubble sort:
	cout << "		Testing Bubble sort\n" << endl;
	cout << "	Small Array size = " << arraySizeSmall << endl;
	
	srand(time(0));
	CustomArray<int> arr(100000000);
	int RepeatCount = 3;
	int totalSwapCount = 0;
	int totalComparisonCount = 0;
/////////////////////////////////////////////////////////////////////////////////
	int start_s1 = clock();
	for(int count = 0; count<RepeatCount; ++count)
	{
		
		arr.reset();
		for (int i = 0; i < arraySizeSmall; ++i)
		{
			arr.push(rand() % 200);
			
		}

		totalSwapCount += arr.BubbleSort(totalComparisonCount);
	}
	int stop_s1 = clock();
	cout << endl;
	cout << "time: " << (stop_s1 - start_s1) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\nAverage number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\nAverage number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
	totalSwapCount = 0;
	totalComparisonCount = 0;
	cout << endl;
	cout << "	Medium Array size = " << arraySizeMedium << endl;
	int start_s2 = clock();
	for (int count = 0; count<RepeatCount; ++count)
	{
	
		arr.reset();
		for (int i = 0; i < arraySizeMedium; ++i)
		{
			arr.push(rand() % 200);
		
		}

		totalSwapCount += arr.BubbleSort(totalComparisonCount);
	}
	int stop_s2 = clock();
	cout << endl;
	cout << "time: " << (stop_s2 - start_s2) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\nAverage number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\nAverage number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
	totalSwapCount = 0;
	totalComparisonCount = 0;
	cout << endl;
	cout << "	Large Array size = " << arraySizeLarge << endl;
	int start_s3 = clock();

	for (int count = 0; count<RepeatCount; ++count)
	{
	
		arr.reset();
		for (int i = 0; i < arraySizeLarge; ++i)
		{
			arr.push(rand() % 200);
		
		}

		totalSwapCount += arr.BubbleSort(totalComparisonCount);
	}
	int stop_s3 = clock();
	cout << endl;
	cout << "time: " << (stop_s3 - start_s3) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\nAverage number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\nAverage number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/// testing Selection Sort
	cout << endl;
	cout << "						Testing Selection sort\n" << endl;
	cout << "					Small Array size = " << arraySizeSmall << endl;
	
	srand(time(0));
	totalSwapCount = 0;
	totalComparisonCount = 0;
	int start_s4 = clock();
	for (int count = 0; count < RepeatCount; ++count)
	{

		arr.reset();
		for (int i = 0; i < arraySizeSmall; ++i)
			arr.push(rand() % 200);

		totalSwapCount += arr.SelectionSort(totalComparisonCount);


	}
	int stop_s4 = clock();
	cout << endl;
	cout << "				time: " << (stop_s4 - start_s4) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\n				Average number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\n				Average number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout << "					Medium Array size = " << arraySizeMedium << endl;

	srand(time(0));
	totalSwapCount = 0;
	totalComparisonCount = 0;
	int start_s5 = clock();
	for (int count = 0; count < RepeatCount; ++count)
	{

		arr.reset();
		for (int i = 0; i < arraySizeMedium; ++i)
			arr.push(rand() % 200);

		totalSwapCount += arr.SelectionSort(totalComparisonCount);


	}
	int stop_s5 = clock();
	cout << endl;
	cout << "				time: " << (stop_s5 - start_s5) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\n				Average number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\n				Average number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout << "					Large Array size = " << arraySizeLarge << endl;

	srand(time(0));
	totalSwapCount = 0;
	totalComparisonCount = 0;
	int start_s6 = clock();
	for (int count = 0; count < RepeatCount; ++count)
	{
		/// first setting up the array
		arr.reset();
		for (int i = 0; i < arraySizeLarge; ++i)
			arr.push(rand() % 200);

		totalSwapCount += arr.SelectionSort(totalComparisonCount);


	}
	int stop_s6 = clock();
	cout << endl;
	cout << "				time: " << (stop_s6 - start_s6) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\n				Average number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\n				Average number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
	cout << endl;
	cout << "		Testing Insertion sort\n" << endl;
	cout << "	Small Array size = " << arraySizeSmall << endl;
	srand(time(0));
	int totalShiftCount = 0;
	totalComparisonCount = 0;
	int start_s7 = clock();
	for (int count = 0; count<RepeatCount; ++count)
	{

		arr.reset();
		for (int i = 0; i < arraySizeSmall; ++i)
		{
			arr.push(rand() % 200);

		}

		totalSwapCount += arr.InsertionSort(totalComparisonCount);
	}
	int stop_s7 = clock();
	cout << endl;
	cout << "time: " << (stop_s7 - start_s7) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\nAverage number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\nAverage number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
	/////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////
	totalSwapCount = 0;
	totalComparisonCount = 0;
	cout << endl;
	cout << "	Medium Array size = " << arraySizeMedium << endl;
	int start_s8 = clock();
	for (int count = 0; count<RepeatCount; ++count)
	{

		arr.reset();
		for (int i = 0; i < arraySizeMedium; ++i)
		{
			arr.push(rand() % 200);

		}

		totalSwapCount += arr.InsertionSort(totalComparisonCount);
	}
	int stop_s8 = clock();
	cout << endl;
	cout << "time: " << (stop_s8 - start_s8) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\nAverage number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\nAverage number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
	/////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////
	totalSwapCount = 0;
	totalComparisonCount = 0;
	cout << endl;
	cout << "	Large Array size = " << arraySizeLarge << endl;
	int start_s9 = clock();

	for (int count = 0; count<RepeatCount; ++count)
	{

		arr.reset();
		for (int i = 0; i < arraySizeLarge; ++i)
		{
			arr.push(rand() % 200);

		}

		totalSwapCount += arr.InsertionSort(totalComparisonCount);
	}
	int stop_s9 = clock();
	cout << endl;
	cout << "time: " << (stop_s9 - start_s9) / double(CLOCKS_PER_SEC) << " Sec" << endl;
	cout << "\nAverage number of swaps = " << totalSwapCount / RepeatCount;
	cout << "\nAverage number of Comparisons= " << totalComparisonCount / RepeatCount;
	cout << endl;
	/////////////////////////////////////////////////////////////////////////////////
	cout << endl;
	cout << "	For small: Insertion Sort id the fastest" << endl;
	cout << "	For medium: Insertion Sort id the fastest" << endl;
	cout << "	For large: Insertion Sort id the fastest" << endl;
}
