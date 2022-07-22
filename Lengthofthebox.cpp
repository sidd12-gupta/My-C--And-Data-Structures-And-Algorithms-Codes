//We will use friend function to print the length of the box..

class Box{
    private:
    float length;
    friend friend_length(Box );
    public:
    void setLength(float val){
        length=val;
        
    }
};

int friend_length(Box b){

    b.length=60;
    return b.length;
}

int main(){
    Box a;
    friend_length(a);
    return 0;
}