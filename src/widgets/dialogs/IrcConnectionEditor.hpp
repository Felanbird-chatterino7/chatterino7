#pragma once

#include "providers/irc/Irc2.hpp"
#include "widgets/BaseWindow.hpp"

#include <QDialog>

#include <optional>

namespace Ui {
class IrcConnectionEditor;
}

namespace chatterino {

struct IrcServerData;

class IrcConnectionEditor : public QDialog
{
    Q_OBJECT

public:
    explicit IrcConnectionEditor(const IrcServerData &data, bool isAdd = false,
                                 QWidget *parent = nullptr);
    ~IrcConnectionEditor() override;

    IrcServerData data();

private:
    Ui::IrcConnectionEditor *ui_;
    IrcServerData data_;
};

}  // namespace chatterino
