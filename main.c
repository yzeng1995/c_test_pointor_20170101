#include <stdio.h>
/*
 * this program is a test when learning c languege for pointor!
 * history:
 *  	 20170101 zeng yan release
 */

void func(void *pv)
{
	/* *pv = 'A' is illegal */
	char *pchar = pv;
	printf("%c\n", *pchar);

	*pchar = 'A';
	printf("%c\n", *pchar);

}

void swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	
	//return px;
}

int main(void)
{
	char c;
	func(&c);
	printf("%c\n", c);

	int i = 10, j = 20;
	swap(&i, &j);
	printf("now i=%d, j=%d\n", i, j);
/*
	const char *p = "abcd";
	const char str1[5] = "abcd";
	char str2[5] = "abcd";

	printf(p);
	printf(str1);
	printf(str2);
	printf("abcd");
*/

	
	char a[4][3][2] = {{{'a', 'b'}, {'c', 'd'}, {'e', 'f'}}, 
		{{'g', 'h'}, {'i', 'j'}, {'k', 'l'}}, 
		{{'m', 'n'}, {'o', 'p'}, {'q', 'r'}}, 
		{{'s', 't'}, {'u', 'v'}, {'w', 'x'}}};
	char (*pa)[2] = &a[1][0];
	char (*ppa)[3][2] = &a[1];
	char (*p)[2] = &a[2][1];
	printf("a[2][2][1]=%c\n", a[2][2][1]);
	printf("a[2][2][1]=%c\n", *(*(pa+5)+1));
	printf("a[2][2][1]=%c\n", *(*(*(ppa+1)+2)+1));
	printf("a[2][2][1]=%c\n", *(*(p+1)+1));

	int counts[4] = {1, 2, 3, };
	char aa = counts[2];
	printf("count[2]=%d\n", aa);
	printf("count[2]=%d\n", counts[0]);
	printf("count[2]=%d\n", counts[1]);





	return 0;
}
