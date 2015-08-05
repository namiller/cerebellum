template <class In, class Out> class BlackBox {

    virtual Out getOutput() = 0;
    virtual void giveInput(In) = 0;    
    virtual void advanceTime(double dt) = 0;

};

