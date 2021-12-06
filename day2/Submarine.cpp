class Submarine {
    private:
    int forward{0};
    int depth{0};

    public:
    void MoveForward(int dist) {
        forward += dist;
    }
    
    void MoveDown(int dist) {
        depth += dist;
    }

    void MoveUp(int dist) {
        depth -= dist;
    }

    int MoveValue() {
        return forward * depth;
    }
};