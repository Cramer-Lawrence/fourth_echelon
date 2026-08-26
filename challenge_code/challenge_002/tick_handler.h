class tickHandler {
public:
    int TickCount{0};
    float TickDuration{1.f};

public:
    tickHandler() = default;
    void beginTicking();

private:
    void prepareOutput();
};