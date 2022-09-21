#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display() {}
};

class cwhvideo : public cwh
{
    float video_length;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        video_length = vl;
    }

    void display()
    {
        cout <<endl<< "This is an amazing video with title: " << title << endl;
        cout << "ratings" << rating << endl;
        cout << "length of video is " << video_length << " minutes" << endl<<endl;
    }
};

class cwhtext : public cwh
{
    float words;

public:
    cwhtext(string s, float r, float wc) : cwh(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "This is an amazing text tutorial  with title: " << title << endl;
        cout << "ratings : " << rating << endl;
        cout << "no of words in the text tutuorial is " << words << " words" << endl;
    }
};

int main()
{

    string title;
    float ratings, vlen;
    int words;

    title = "kishan tutorial";
    vlen = 4.56;
    ratings = 4.89;

    cwhvideo video(title, ratings, vlen);
    //video.display();
    title = "kishan text tutorial";
    words = 444;
    ratings = 4.18;

    cwhtext text(title, ratings, words);
   // text.display();

   cwh* tuts[2];
   tuts[0]=&video;
   tuts[1]=&text;

    tuts[0]->display();
   tuts[1]->display();


    return 0;
}