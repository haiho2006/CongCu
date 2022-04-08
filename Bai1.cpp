#include <stdio.h>
void DocFileLuuVaoMang(int a[], int &n)
{
	FILE *f=fopen("DuLieu.txt","rt");
	if(f==NULL)
	{
		printf("Khong mo dc File!!!");
		return;
	}
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++)
		fscanf(f,"%d",&a[i]);
	fclose(f);
}

void XuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
		printf("%4d",a[i]);
}

int KTNT(int n)
{
	if(n>2)		return 0;
	for(int i=2;i<n;i++)
		if(n%i ==0)		return 0;
	return 1;
}

void GhiSoNTTrongMangVaoFile(int a[], int n)
{
	FILE *f=fopen("DuLieu.txt","at");
	if(f=NULL){
		printf("Khong mo dc File!!!");
		return;
}
	fprintf(f,"\nCac so nguyen to trong mang la: \n");
	for(int i=0;i<n;i++)
		if(KTNT(a[i])==1)
			fprintf(f,"%4d",a[i]);
	printf("\nDa ghi file xong.");
	fclose(f);
}
int main()
{
	int a[100],n;
	DocFileLuuVaoMang(a,n);
	printf("\nMang ban vua doc tu file: \n");
	XuatMang(a,n);
	GhiSoNTTrongMangVaoFile(a,n);
}



