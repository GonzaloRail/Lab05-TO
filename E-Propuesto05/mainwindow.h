#include <QMainWindow>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAgregarPaisClicked();
    void onQuitarPaisClicked(QWidget *paisWidget);
    void onEditarPaisClicked(QLineEdit *nombrePais, QLineEdit *nombreCapital);

private:
    Ui::MainWindow *ui;
    QVBoxLayout *layoutPaises;
};
