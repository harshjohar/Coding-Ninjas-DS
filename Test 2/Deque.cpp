
class Deque {
    // Complete this class
    int* arr;
    int size;
    public:
    Deque(int cap) {
        size=0;
        arr = new int[cap];
    }
    
    void insertFront(int data) {
        if(size==10) {
            cout<<-1<<endl;
            return;
        }
        for(int i=size; i>=1; i--) {
            arr[i]=arr[i-1];
        }
        arr[0]=data;
        size++;
        return;
    }
    
    void insertRear(int data) {
        if(size==10) {
            cout<<-1<<endl;
            return;
        }
        arr[size]=data;
        size++;
        return;
    }
    
    void deleteRear() {
        if(size==0) {
            cout<<-1<<endl;
            return;
        }
        size--;
    }
    
    void deleteFront() {
        if(size==0) {
            cout<<-1<<endl;
            return;
        }
        for(int i=0; i<size; i++) {
            arr[i]=arr[i+1];
        }
        size--;
    }
    
    int getFront() {
        if(size==0) {
            return -1;
        }
        return arr[0];
    }
    
    int getRear() {
        if(size==0) {
            return -1;
        }
        return arr[size-1];
    }
};