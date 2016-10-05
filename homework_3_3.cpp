//p104
#include"highgui.h"
#include"cv.h"
int main()
{
		CvMat* M = cvCreateMat(100,100,CV_8UC3);
		cvZero(M);	
		uchar* ptr = NULL;
		for(int i = 20;i <= 40;i++)
				for(int j = 5;j <= 20;j++)
				{	ptr = cvPtr2D(M,i,j);
						ptr[1] = 255;
				}
		cvNamedWindow("hw1");
		cvShowImage("hw1",M);
		cvWaitKey(0);
		cvReleaseMat(&M);
		cvDestroyWindow("hw1");
		return 0;
}
