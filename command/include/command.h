#pragma once
class Command {
 protected:
  bool successed;

 public:
  virtual void call() = 0;
  virtual void undo() = 0;
  virtual ~Command() = default;
};
