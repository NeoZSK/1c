import cv2

cap = cv2.VideoCapture(0)  # 0 – domyślna kamera

while True:
    isReturned, frame = cap.read()
    if not isReturned:
        break

    cv2.imshow('Camera', frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()