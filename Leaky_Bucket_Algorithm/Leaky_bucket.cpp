#include <bits/stdc++.h>
using namespace std;
int main()
{
	int no_of_queries, storage, output_pkt_size;
	int input_pkt_size, bucket_size, size_left;

	// initial packets in the bucket
	storage = 0;

	// total no. of times bucket content is checked
	int n;
	cout<< "Enter the number of queries to be made ";
	cin>>no_of_queries;
    int querry[no_of_queries];

    cout<< "Enter the number of packets to be transmitted for each query\n";
	for(int i=0;i<no_of_queries;i++)
    {
     cin>>querry[i];

	}

	int b;
	cout <<"Enter bucket size\n";
	cin>>bucket_size;



	cout<<"Enter the constant output packet rate\n" ;
	cin>>output_pkt_size;

	for (int i = 0; i < no_of_queries; i++) // space left
	{
		size_left = bucket_size - storage;
		if (querry[i] <= size_left) {
			// update storage
			storage += querry[i];
		}
		else {
			printf("Packet loss = %d\n", querry[i]);
		}
		printf("Buffer size= %d out of bucket size= %d\n",
			storage, bucket_size);
		storage -= output_pkt_size;
	}
	return 0;
}
