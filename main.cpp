#include <iostream>
#include "bitmap.h"
#include <string>
#include <vector>
using namespace std;
int main()
{
Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;
string filename;
//ask the user for an images file name
cout << "What file do you want converted?" << endl;
cin >> filename;   
        
//read a file example.bmp
image.open(filename);
bool validBMP = image.isImage();
//If input isnt valid prompts for new input
while(validBMP != true)
    {
    cout<<"It appears something went wrong, please re-enter the file name and make sure it is a 24 bit depth Windows BMP file."<<endl;
    cout<<"What file do you want to convert?"<<endl;
    cin>>filename;
    image.open(filename);
    validBMP = image.isImage();
    }
//converts the example.bmp into a pixel matri and displays the size
bmp = image.toPixelMatrix();
cout <<filename<< "  has been loaded. It is " <<bmp.size()<<" pixelswide and "<<bmp[0].size()<<" pixels high."<<endl;

//save the image and display the image back to the user in grayscale
    for(int i=0; i<bmp.size();i++)
        {
        for(int j=0; j<bmp[0].size();j++)
            {
            rgb = bmp[i][j];
            int r = rgb.red;
            int g = rgb.green;
            int b = rgb.blue;
            int avg = (r+g+b)/3;
            rgb.red = avg;
            rgb.green = avg;
            rgb.blue = avg;
            bmp[i][j] = rgb;
            }    
        }
image.fromPixelMatrix(bmp);
image.save("OldTimey.bmp");

return 0;
}
