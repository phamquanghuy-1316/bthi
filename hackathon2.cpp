#include <stdio.h>
int main(){
	int choice,n,chan=0,le=0;
	const int maxsize=100;
	int arr[maxsize]={0};
	do{
	printf("\nMENU\n");
	printf("1. nhap so phan tu va gia tri cua mang \n");
	printf("2. in ra cac phan tu cua mang \n");
	printf("3. dem so luong phan tu chan le trong mang  \n");
	printf("4. tim gia tri lon thu 2 trong mang \n");
	printf("5. them 1 phan tu vao dau mang \n");
	printf("6. xoa phan tu tai vi tri cu the \n");
	printf("7. sap xep giam dan \n");
	printf("8. tim kiem phan tu co ton tai trong mang khong \n");
	printf("9. in ra binh phuong cac so nguyen to trong mang  \n");
	printf("10. sap xep giam dan bubble sort \n");
	printf("nhap lua chon ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("nhap vao so phan tu muon nhap \n");
			scanf("%d",&n);
			for(int i=0; i<n; i++){
				printf("nhap vao phan tu arr[%d] \n",i);
				scanf("%d",arr +i);
			}
			break;
		case 2:
			for(int i=0; i<n; i++){
				printf("%d ",arr[i]);
			}
			break;
		case 3:
			chan=0;
			le=0;
			for(int i=0; i<n; i++){
				if(arr[i]%2==0){
					chan++;
				}else{
					le++;
				}
			}
			printf("so phan tu chan la %d \n",chan);
			printf("so phan tu le la %d \n",le);
			break;
		case 4:
			break;
		case 5:
			int newElement;
			printf("nhap phan tu muon them");
			scanf("%d",&newElement);
			for(int i=n; i>=0; i--){
				arr[i+1]=arr[i];
			}
			arr[0]=newElement;
			n++;
			break;
		case 6:
			int deleteIndex;
			printf("nhap vi tri muon xoa");
			scanf("%d",&deleteIndex);
			for(int i=deleteIndex;i<=n;i++){
				arr[i]=arr[i+1];
			}
			n--;
			break;
		case 7:
			int key,j;
			for(int i=1;i<n;i++){
				key = arr[i];
				 j=i-1;	
		 
			while(j>=0 && arr[j]<key){
				arr[j+1]=arr[j];
				j=j-1;
				}
			arr[j+1]=key;
			}
			printf("\n");
			break;
		case 8:
			int target,left,right,mid,s;
			s=0;
			left=0;
			right=n;
			printf("nhap vao phan tu muon tim ");
			scanf("%d",&target);
			while(left<=right){
				mid=left+(right-left)/2;
				if(mid==target){
					s=1;	
				}
				if(mid>target){
					right=mid-1;
				}else{
					left=mid+1;
				}
			}
			if(s==1){
				printf("phan tu %d co ton tai trong mang \n",target);
			}else{
				printf("phan tu %d khong ton tai trong mang \n",target);
			}
			break;
		case 9:
			{
				int flag=1,countPrime=0;
				for(int i=0;i<n;i++){
					flag=1;
				countPrime++;
				if(arr[i]<2){
					continue;
				}
				for(int j=2;j*j<arr[i];j++){
					if(arr[i]%j==0){
						flag=0;
						break;
					}
				}
				if(flag=1){
					printf("%d ",arr[i]*arr[i]);
				}
				if(countPrime=0){
					printf("mang khong co so nguyen to");
				}
			}
				}
			break;
		case 10:
			int tmp;
			for(int i=0; i<n-1;i++){
				for(int j=0; j<n-1-i; j++){
					if(arr[j]<arr[j+1]){
						tmp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=tmp;
					}
				}
			}
			break;
		default:
			printf("lua chon khong hop le ");
			break;
		}
	}while(1);
	return 0;
}

