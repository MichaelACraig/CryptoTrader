# CryptoTrader
Automated Crypto Currency Trading Bots Using Arduino to run 24/7. Written in C++ to Integrate w/ Arduino Uno

# Installation Instructions
1. Install libcurl for HTTP Requests (brew install curl for MAC)
2. Install  nlohmann/json for json parsing (brew install nlohmann-json)

# Low Risk Day Trader Bot
    - Picks from a personally select list of proven Altcoins
    - Conducts realtime analysis of the price via Binance API (Or CoinMarketCap or Arkham or something, REST API or C++ API)
    - Distribution of funds to altcoins should be based off a separate calculation/ algorithm and shouldn't be "evenly" split up. We shoud have reserves in USDC for if we want to purchase more of a given coin. I wouldn't do the Hype Factor analysis for this, but might play a factor later on!
    - Follows a simple set of rules to ensure relatively consistent profits:
        * Tracks costs from the purchase point and bases its buy/sell off of the purchase point
        * If we are at a certain percentage of profit, we need to track the amount of time elapsed when we hit this line of profit. Research some algorithms for that, but mainly if we begin to see a trend downward, then sell the profits to try and avoid a net loss. We should also base the point to sell based on empirical data.
        * If we are in the negative from the initial purchase point, have a separate line of thinking for adressing whether or not to sell based on empirical data. 
