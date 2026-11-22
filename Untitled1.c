#include<stdio.h>
int main()
{
int a[100];
int i,n,key,low,high,mid,found=0;
printf("ENTER SIZE OF  ARRAY: ");
scanf("%d",&n);
printf("ARRAY IN ASSCENDING ORDER:\n");
// ARRAY INPUT //
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
// WUT TO FIND //
printf("ENTER NUMBER TO FIND: ");
scanf("%d",&key);
low = 0; //  first index //
high = n - 1; // last index //
// search loop //
while(low<=high)
{
mid = (low + high)/2; // mid index //
if(a[mid]==key) // case 1 //
{
printf("ELEMENT FOUND AT %d",mid); // IMP= MID HERE TELLS WHERE ON INDEX //
found = 1; // MARK AS FOUND //
break; // EXIT CURRENT LOOP //
}
else if (key<a[mid]) // KEY IN LEFT HALF //
{high = mid - 1;} // IGNORW RIGHT HALF //
else // KEY IN RIGHT HALF //
{low = mid + 1;} // IGNORE LEFT HALF //
}
if(found==0){printf("ELEMENT NOT IN ARRAY");} //IF ELEMENT NOT IN ARRAY //
return 0;
}
