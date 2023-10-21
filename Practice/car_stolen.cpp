#include<iostream>
using namespace std;
int main()
{
	int rows,cols,i,j,most_stolen_car_Floor;
	
	cout<<"Enter no of rows and cols(m*n format):"<<endl;
	cin>>rows>>cols;
	int arr[rows][cols];
	
	cout<<"Enter 1 if car if there,else for empty 0:"<<endl;
	for( i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			cin>>arr[i][j];
		}
	}
	for( i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int max=0;
	for( i=0; i<rows; i++)
	{
		int cnt=0;
		for(j=0; j<cols; j++)
		{
			if (arr[i][j]==1)
			{
				cnt++;
			}
		}
		if(max<cnt)
		{
			max=cnt;
			most_stolen_car_Floor=i+1;
		}
	}
	cout<<endl;
	cout<<most_stolen_car_Floor;
}
