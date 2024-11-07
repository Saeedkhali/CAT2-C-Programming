/*Author: saeed khalid
Reg NO:CT102/G/22699/24
*/
#include <stdio.h>

int main(){
	int i,j;
	int score [4][2]={{65,92},{84,72},{35,70},{59,67}};
	
		for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			
				printf("score[%d][%d]=%d\n",i,j,score[i][j]);
			}
		}
	
	return 0;
}