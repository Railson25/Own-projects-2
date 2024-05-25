import "../styles/components/side-bar.sass";
import KimJin from "../img/KimJin.jpg";

export const SideBar = () => {
  return (
    <aside id="sidebar">
      <img src={KimJin} alt="Jin Won" />
      <p className="title"></p>
      <p>social medias</p>
      <p>contact info</p>
      <a href="" className="btn">
        Download
      </a>
    </aside>
  );
};
