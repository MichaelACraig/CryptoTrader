#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Currency{
    public: // What everything needs to access
        string name = "";
        string ticket = "";

        float cost = 0;
        int volume_24hr = 0; // Volume ($) traded within last 24 hours
        int total_supply = 0; // Number of coins on the market
        int max_supply = 0; // Number of coins that can be produced
        float market_cap = total_supply * cost; // Total value of current ciculating crypto
        
        int one_day_high = 0;
        int one_day_low = 0;
        int seven_day_high = 0;
        int seven_day_low = 0;
        int month_high = 0;
        int month_low = 0;
        int max_high = 0;
        int max_low = 0;

        //int chatter_score = 0; // Will be added later, how much people are talking about a currency
    private: // What only the Currency class needs to access
        string get_name(string API_ID);
        string get_ticket(string API_ID);
        vector<double> get_currency_data(string API_ID);
};