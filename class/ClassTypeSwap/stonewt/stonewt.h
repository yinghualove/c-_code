//stonewt.h -- definition for Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    private:
        enum{Lbs_per_stn = 14};              //pounds per stone
        int stone;                           //whole stones
        double pds_left;                     //fractional pounds
        double pounds;                       //entire weigth in pounds
    public:
        Stonewt(double lbs);                 //constructor for double pounds
        Stonewt(int stn, double lbs);        //constructor for stone,lbs
        Stonewt();                           //default constructor  
        ~Stonewt();                          //desctructor
        void show_lbs()const;                //show weigth in pounds format
        void show_stn()const;                //show weigth in stone format                    
};
#endif