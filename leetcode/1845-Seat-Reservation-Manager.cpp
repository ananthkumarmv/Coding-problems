class SeatManager {
public:
    set<int> avail;

        SeatManager(int n){
            for(int i=1; i<=n; i++)
                avail.insert(i);
        }

        int reserve() {
            int res = *begin(avail);
            avail.erase(begin(avail));
            return res;
        }
        
        void unreserve(int seatNumber) {
            avail.insert(seatNumber);
        }
};

