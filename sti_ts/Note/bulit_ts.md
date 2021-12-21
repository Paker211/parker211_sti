# Create TypeScript Enviroment on NodeJs

- **step1 :** establist project directory
- **step2 :** npm initialize
- **step3 :** npm install --save-dev typescript @types/express @types/node, npm install --save express
- **step4 :** tsc --init (generate tsconfig.json)
- **step5 :** establish src diectoy
- **step6 :** npm install --save-dev nodemon ts-node
- **step7 :** Revise package.json
  - "scripts": {
  - "start": "nodemon src/app.ts", // 選擇進入點檔案
  - "build": "tsc --project ./",
  - "test": "echo \"Error: no test specified\" && exit 1"
  - }
  - npm start後，nodemon 即會用 ts-node 來監聽檔案是否有儲存的動作
  - npm run build後則會出現一個 dist 資料夾來存放編譯過後的 js 檔

