#include <udt.h>

typedef struct py_udt_error        : std::exception {} py_udt_error;
typedef struct cc_general_error    : std::exception {} cc_general_error;

class AutoGILCallOut
{
    public:
    AutoGILCallOut(){};
    ~AutoGILCallOut(){};
};

class AutoGILCallBack
{
    public:
    AutoGILCallBack(){};
    ~AutoGILCallBack(){};

};

typedef struct 
{
    PyObject_HEAD;
    UDTSOCKET cc_socket;
    int family;
    int type; 
    int proto;

} pyudt_socket_object;

class RecvBuffer
{
    public:
        RecvBuffer(unsigned int size);
        ~RecvBuffer();

        char *get_head();
        unsigned int get_max_len();
        unsigned int get_buf_len();
        unsigned int set_buf_len(unsigned int len);

    private:
        char *head;
        unsigned int max_buf_len;
        unsigned int buf_len;
        
    
};