class BetterSubmarine {
    private:
        int forward{0};
        int depth{0};
        int aim{0};
    public:
        void Down(int amount) {
            aim += amount;
        }

        void Up(int amount) {
            aim -= amount;
        }

        void Forward(int amount) {
            forward += amount;
            depth += (aim * amount);
        }

        int MoveValue() {
            return forward * depth;
        }
};