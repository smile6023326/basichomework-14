#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("��J1�ӼƦr:");
	scanf("%d",&a);
    printf("��J1�ӼƦr:");
	scanf("%d",&b);
	printf("��J1�ӼƦr:");
	scanf("%d",&c);
	if(a+b>c&&a+c>b&b+c>a)
	printf("�O�ӤT����\n");
	else
	printf("���O�T����\n");
	system("pause");
	return 0;
}
