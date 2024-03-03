class LibCAN(){
    public:
        LibCAN(); // copy CAN Init
        CAN_send();
        frame& can_receive();

}