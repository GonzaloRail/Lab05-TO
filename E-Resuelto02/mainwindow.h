#include <QMainWindow>
#include <QVBoxLayout>

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
    void onAgregarTareaClicked();
    void onQuitarTareaClicked(QWidget *tareaWidget); // Nuevo slot para quitar tarea


private:
    Ui::MainWindow *ui;
    QVBoxLayout *layoutTareas;
};
