template<class T>
class Iterator;

template<class T>
class Aggregate
{
public:
    friend class Iterator<T>;
    Aggregate()
    {
        pos = 0;
        size = 10; 
        list = new T[size];
    }

    void add(T element)
    {
        if(pos < size)            
            list[pos++] = element; 
    }

    Iterator<T>* getIterator()
    {
        return new Iterator<T>(this);
    }
    
    ~Aggregate()
    {
        delete [] list;
    }

    T getElementAt(int pos){
        return list[pos];
    }

    int getPos()
    {
        return pos;
    }  

private:
    T* list;
    int size;
    int pos;
};
