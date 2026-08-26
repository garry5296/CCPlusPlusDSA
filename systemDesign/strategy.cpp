#include<iostream>
using namespace std;

// --abstract class for defining notification strategys--
class notification_strategy{
    public:
        ~notification_strategy() = default;
        virtual void notify(string,string)=0;
};

// --concrete class for notifications by sms--
class sms_strategy:public notification_strategy{
    public:
        void notify(string recipient,string msg) override
        {
            cout << msg << " Sent using sms service for " << recipient << endl;
        }
};

// --concrete class for notification by email--
class email_strategy:public notification_strategy{
    public:
        void notify(string recipient,string msg) override
        {
            cout << msg << " Sent using email service for " << recipient << endl;
        }
};

// --concrete class for notification by push notification--
class push_strategy:public notification_strategy{
    public:
        void notify(string recipient,string msg) override
        {
            cout << msg << " Sent by push notification for " << recipient << endl;
        }
};

// --concrete class for notification by whatsapp notification--
class whatsapp_strategy:public notification_strategy{
    public:
        void notify(string recipient,string msg) override
        {
            cout << msg << " Sent via Whatsapp notification for " << recipient << endl;
        }
};

class notification_service{
    private:
        notification_strategy* ns;
    public:
        notification_service(notification_strategy* temp)
        {
            this->ns = temp;
        };
        void set_strategy(notification_strategy* temp)
        {
            this->ns = temp;
        }
        void notify_user(string recipient,string message)
        {
            ns->notify(recipient,message);
        };
};
int main()
{
    notification_service *nser=new notification_service(new email_strategy());
    nser->notify_user("Anmol","Welcome Aboard!!");
    nser->set_strategy(new sms_strategy());
    nser->notify_user("Linus","Order reached nearest post office");
    return 0;
}