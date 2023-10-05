//Smart Ptr

template<typename T>
class smart_ptr{
    T* m_object;
public:
    smart_ptr(T *object):
        m_object(object){}
    
    ~smart_ptr(){
        delete m_object;
    }    

    T* operator->(){
        return m_object;
    }
    T& operator* (){
        return *m_object
    }
};