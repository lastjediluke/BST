// Yes, this is a very tiny node. Everything is accessibly publicly, without accessors or mutators
namespace lab7 {
    class node {
    public:
        node *left, *right;
        int data;
        unsigned frequency;



        explicit node(int data) : data(data), frequency(1), left(nullptr), right(nullptr) {}
    };
}
