import { Header } from "@/components/header";

type DashboardLayoutProps = {
  children: React.ReactNode;
};

const DashboardLayout = ({ children }: DashboardLayoutProps) => {
  return (
    <>
      <Header />
      <main>{children}</main>
    </>
  );
};

export default DashboardLayout;
