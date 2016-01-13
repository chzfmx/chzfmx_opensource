#include <QtCore/QCoreApplication>
#include <stdio.h>
#include <cv.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    
    //return a.exec();
    if( argc !=2 )
    {
        printf("usage : displayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image = imread(argv[1],1);
    if(!image.data)
    {
        printf("No Image data\n");
        return -1;
    }
    namedWindow( "displayImage", WINDOW_AUTOSIZE );
    while(1)
    {
        imshow( "Display Image", image );
        char c =  waitKey(30);
        if( 27==c )
            return 0;
    }
}
