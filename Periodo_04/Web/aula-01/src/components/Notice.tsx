import Image from "next/image";

type NoticeProps = {
  title: string;
  image?: string;
  content: string;
}

export const Notice = ({ title, image, content }: NoticeProps) => {
  return (
    <section>
      <h1 className="p-4">{title}</h1>
      { image && <img src={image} alt="Imagem da noticia" ></img> }
      <p>{content}</p>
    </section>
  )
}