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
cout << "Wanna see a cool picture? Type 'Y' for Yes or 'N' for no." << endl;
cin >> filename;
   
        
//read a file example.bmp and convert it to a pixel matrix

        image.open(filename);
        bmp = image.toPixelMatrix();
        cout << "machupicchu.bmp has been loaded. It is " <<bmp.size()<<" pixelswide and "<<bmp[0].size()<<" pixels high."<<endl;

//save the image and display the image back to the user in grayscale
/*    for(int i=0; i<bmp.size();i++)
        {
        for(int j=0; j<bmp[0].size();j++)
            {
            int r = rgb.red;
            int g = rgb.green;
            int b = rgb.blue;
           }
*/
//if the program doesn't work tell the user why and have them re-enter the file name again














return 0;
}
