import React from "react";
import ReactDOM from "react-dom/client";
import App from "./App.tsx";

import { firebaseConfig } from "./firebase-config.ts";
import { initializeApp } from "firebase/app";
// import { getAnalytics } from "firebase/analytics";

const app = initializeApp(firebaseConfig);

ReactDOM.createRoot(document.getElementById("root")!).render(
  <React.StrictMode>
    <App />
  </React.StrictMode>
);
