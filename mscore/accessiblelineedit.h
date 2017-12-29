
#ifndef __ACCESSIBLELINEEDIT_H__
#define __ACCESSIBLELINEEDIT_H__

namespace Ms {

class AccessibleLineEdit : public QLineEdit{
      Q_OBJECT
    public slots:
      void characterAfterCursor(int old_pos, int new_pos);

    public:
      AccessibleLineEdit(QWidget* parent);
      };

}

#endif // __ACCESSIBLELINEEDIT_H__
