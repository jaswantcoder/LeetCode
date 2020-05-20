#define pb push_back

class StockSpanner {
public:
    stack<int> prices,weights;
   
    StockSpanner() {
        
    }
    
    int next(int price) {
     int w = 1;
        while (!prices.empty() && prices.top() <= price) {
            prices.pop();
            w += weights.top();
            weights.pop();
        }

        prices.push(price);
        weights.push(w);
        return w;
    }
};
