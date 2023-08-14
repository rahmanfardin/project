class node
{
private:
    int i;
    int j;

public:
    node(int i, int j) : i(i), j(j){};
    int getI() { return i; }
    int getJ() { return j; }
};