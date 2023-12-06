#include <iostream>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string st, float r)
    {
        title = st;
        rating = r;
    }
    void virtual display() {}
};
class cwhvideo : public cwh
{
    double time;

public:
    cwhvideo(string c, double a, float x) : cwh(c, x)
    {
        time = a;
    }
    void display()
    {
        cout << "This is a video named " << title << " of duration " << time << " mins"
             << "\nIt has a rating of " << rating << "!" << endl;
    }
};
class cwhtxt : public cwh
{
    int words;

public:
    cwhtxt(string c, int wc, float x) : cwh(c, x)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is a pdf named " << title << " of words " << words
             << "\nIt has a rating of " << rating << "!" << endl;
    }
};

int main()
{

    cout << "You can rate our videos and pdfs!"

         << "\nWhat do want to rate?(video/pdf)\n";
    //taking input from user to select between rating for video or pdf
    string inp;
    cin >> inp;

    //if-else condition to decide whether a video or pdf
    if (inp == "video")
    {

        // A video
        cout << "Enter the name of the video: ";
        string vid;
        cin >> vid;
        cout << "Enter the duration of video: ";
        double dur;
        cin >> dur;
        cout << "How much would rate this video in a scale of 5?" << endl;
        float rate;
        cin >> rate;

        // displaying
        cwhvideo video(vid, dur, rate);  //derived class object with parameters for constructor
        cwh *ptr1 = &video;     //base class pointer pointing derived class object!
        //function call using pointer
        ptr1->display();
    }

    else if (inp == "pdf")
    {
        // For text
        cout << "Enter the name of the pdf: ";
        string name;
        cin >> name;
        cout << "Enter the words count of pdf: ";
        int wc;
        cin >> wc;
        cout << "How much would rate this pdf in a scale of 5?";
        int rate;
        cin >> rate;

        // displaying
        cwhtxt text(name, wc, rate);        //derived class object with parameters for constructor
        cwh *ptr2 = &text;      //base class pointer pointing derived class object!
        //function call using pointer
        ptr2->display();
    }

    return 0;
}