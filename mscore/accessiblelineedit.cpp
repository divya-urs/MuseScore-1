#include <QLineEdit>
#include "accessiblelineedit.h"

namespace Ms {

AccessibleLineEdit::AccessibleLineEdit(QWidget* parent)
   : QLineEdit(parent)
      {
      setFocusPolicy(Qt::TabFocus);
      connect(this, SIGNAL(cursorPositionChanged(int, int)), this, SLOT(characterAfterCursor(int, int)));
      }

void AccessibleLineEdit::characterAfterCursor(int old_pos, int new_pos)
      {
      QAccessibleEvent event(this, QAccessible::TableSummaryChanged);
      QAccessible::updateAccessibility(&event);
      }
}
