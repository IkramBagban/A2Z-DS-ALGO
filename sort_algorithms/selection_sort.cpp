// selection sort :
// https://www.codingninjas.com/studio/problems/selection-sort_624469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

void selectionSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        int minIdx = i;

        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }
}