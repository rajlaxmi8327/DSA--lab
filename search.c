#include<stdio.h>
int main(){
	int n,i,search,found=0;
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements of the array:\n");
	for (i=0;i<n;i++){
		scanf("%d",& arr[i]);
	}
		printf("enterthe element to search:");
		scanf("%d",&search);
		for (i=0;i<n;i++){
			if (arr[i]==search){
				found=i;
				printf("elements %d found at index %d\n",search,i);
				break;
			}
		}
				else(!found){
					printf("element %d not found in the array\n",search);
				}
					return 0;
				}
