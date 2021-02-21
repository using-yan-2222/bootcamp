const int INF = 1e9;

struct minQueue {
    deque<int> dq;

    void add(int x) {
        while (!dq.empty() && dq.back() > x)
            dq.pop_back();
        dq.emplace_back(x);
    }

    void remove(int x) {
        if (!dq.empty() && dq.front() == x)
            dq.pop_front();
    }

    int mini() {
        if (dq.empty())
            return INF;
        return dq.front();
    }
};
