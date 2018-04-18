int rand()
{
	static int arr[] = {8, 8, 7, 9, 23, 74};
	static int i = 0;
	return (arr[i++]);
}
