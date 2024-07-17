import cv2
import pytesseract

'''download tesseract-ocr-w64-setup https://github.com/UB-Mannheim/tesseract/wiki'''
pytesseract.pytesseract.tesseract_cmd = r'C:\Tesseract-OCR\tesseract.exe'


def main():
    cap = cv2.VideoCapture(0)
    while True:
        s, img = cap.read()
        # img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        # _, img = cv2.threshold(img,150, 255, 0)
        # img = cv2.imread('text.png')

        texts = pytesseract.image_to_string(
            img,
            # config='--psm 6 -c tessedit_char_whitelist=0123456789[]:ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        )
        print(texts)
        print()

        cv2.imshow('', img)
        cv2.waitKey(1)


if __name__ == '__main__':
    main()
