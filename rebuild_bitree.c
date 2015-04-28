#include <stdio.h>

int main(int argc, char **argv)
{
	char preorder[26],inorder[26],postorder[26];
	
	while(scanf("%s",postorder)!=EOF&&scanf("%s",inorder)){
		printf("%s\n",postorder);
		printf("%s\n",inorder);
	}
	return 0;
}
