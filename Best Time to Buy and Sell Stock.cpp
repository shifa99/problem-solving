#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
	int maxProfit = INT_MIN;
	//vector<vector<int>>temp(prices.size());
	int size = prices.size();
	
	int minbuy = prices[0];
	for (int i = 1; i<size; i++)
	{
		if (prices[i]<minbuy)
			minbuy = prices[i];
		else
		{
			if (maxProfit<(prices[i] - minbuy))
				maxProfit = (prices[i] - minbuy);
		}

	}
	
	return maxProfit=maxProfit>0?maxProfit:0;
}
int main()
{
	int n;
	vector<int>arr;
	cin >> n;
	int e;
	for (int i = 0; i < n; i++)
	{
		cin >> e;
		arr.push_back(e);
	}
	cout<<maxProfit(arr)<<endl;

}