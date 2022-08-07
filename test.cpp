#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	//string path = "D://0.jpg";
	//Mat img = imread(path);
	//imshow("IMAGE", img);
	//waitKey(0);
	//return 0;
	VideoCapture cap(1);
	Mat image;

	while (true)
	{
		cap.read(image);
		imshow("iamge", image);
		waitKey(1);
	}
	return 0;
}