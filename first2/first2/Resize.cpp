#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;


int main(void)
{
	// resize(size_t sz, Scalar &s) 기존 행렬의 행의 수보다 작으면 자르고, 많으면 행 추가
	Mat m = (Mat_<uchar>(2, 4) << 1, 2, 3, 4, 5, 6, 7, 8);
	cout << "[m] = " << endl << m << endl << endl;

	m.resize(1);
	cout << "m.resize(1) = " << endl << m << endl;
	m.resize(3);
	cout << "m.resize(3) = " << endl << m << endl << endl;
	m.resize(5, Scalar(50));
	cout << "m.resize(5) = " << endl << m << endl;
}